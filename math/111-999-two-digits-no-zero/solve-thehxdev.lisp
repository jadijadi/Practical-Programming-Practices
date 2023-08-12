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

;; seperate a 3 digit number to a list
;; of it's digits
;; 874 -> (8 7 4)
(defun num-to-list (n)
  (list
   (/ (- (rem n 1000) (rem n 100)) 100)
   (/ (- (rem n 100) (rem n 10)) 10)
   (rem n 10)))

;; check if a number is valid
(defun check-num (n)
  ;; convert n to list of it's digits
  (let ((nl (num-to-list n)))
    (cond
      ;; has zero?
      ((member 0 nl) nil)
      ;; three other conditions that check for
      ;; only tow equal digit and one different digit
      ((= (car nl) (nth 2 nl)) (/= (car nl) (nth 1 nl)))
      ((= (car nl) (nth 1 nl)) (/= (car nl) (nth 2 nl)))
      ((= (nth 1 nl) (nth 2 nl)) (/= (car nl) (nth 2 nl))))))

(defun solve ()
  ;; map `check-num` function to all numbers in `nums` list
  ;; and count for `t` (true) values -> 216
  (format t "~D~%" (count t (mapcar #'check-num nums))))
