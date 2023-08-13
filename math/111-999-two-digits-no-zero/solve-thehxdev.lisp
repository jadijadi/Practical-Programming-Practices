;; Author: Hossein Khosravi
;; Github: https://github.com/thehxdev


;; ===================================================
;; How to setup SBCL (lisp interpreter/compiler/repl)
;; Don't install sbcl with package-manager
;; 1. http://www.sbcl.org/platform-table.html
;; 2. http://www.sbcl.org/getting.html

;; How to install Quicklisp (lisp package manager)
;; https://lisp-lang.org/learn/getting-started/
;; (Goto `Install Quicklisp` section)

;; ===================================================
;; HOW TO RUN?
;; sbcl --noinform --load solve-thehxdev.lisp --eval '(tow-digit:solve)' --quit
;; ===================================================

(defpackage tow-digit
  (:use :cl)
  (:export
   #:solve))
(in-package :tow-digit)

;; make range of numbers
(defun range (s e)
  (if (>= s e) '()
      (cons s (range (+ s 1) e))))

;; nums -> range of 100 to 999
(defvar nums
  (range 100 1000))

;; seperate a 3 digit number to a list of it's digits
;; for example:
;; 874 -> (8 7 4)
(defun num-to-list (n)
  (list
   (/ (- (rem n 1000) (rem n 100)) 100)
   (/ (- (rem n 100) (rem n 10)) 10)
   (rem n 10)))

;; check if a number is made by only
;; tow digits
(defun has-tow-digit (n)
  ;; convert n to list of it's digits
  (let ((nl (num-to-list n)))
    (cond
      ;; has zero?
      ((member 0 nl) nil)
      ;; three other conditions to check for
      ;; only 2 unique digit
      ((= (car nl) (nth 2 nl)) (/= (car nl) (nth 1 nl)))
      ((= (car nl) (nth 1 nl)) (/= (car nl) (nth 2 nl)))
      ((= (nth 1 nl) (nth 2 nl)) (/= (car nl) (nth 2 nl))))))

;; map a function (that returns true) to each element
;; of a list and count true values
(defun map-and-count-true (fn l)
  (let ((counter 0))
    (loop for i in l do
      (if (funcall fn i) (setf counter (+ counter 1)))
          :finally (return counter))))

(defun solve ()
  ;; map `check-num` function to all numbers in `nums` list
  ;; and count for `t` (true) values -> 216
  (format t "~D~%" (map-and-count-true #'has-tow-digit nums)))
