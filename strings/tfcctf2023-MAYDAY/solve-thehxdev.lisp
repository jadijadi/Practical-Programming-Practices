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
;; sbcl --noinform --load solve-thehxdev.lisp --eval '(mayday:solve)' --quit
;; ===================================================

(defpackage mayday
  (:use :cl)
  (:export 
    #:solve))
(in-package :mayday)

;; import str package
;; for string manipulation
(ql:quickload "str")

;; define inputstr variable
(defvar inputstr
  "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven")

;; define nums variable as a list of string numbers
(defvar nums
  (list "Zero" "One" "Tow" "Three" "Four" "Five" "Six" "Seven" "Eight" "Nine"))

;; define a function to convert a string to it's
;; correct form in the key
(defun convertstr (s)
  (cond
    ;; fist condition - string in nums list?
    ((member s nums :test #'equal)
     ;; if found, return it's index as string
     (write-to-string (position s nums :test #'equal)))
    ;; second condition - Dash -> '-'
    ((string= s "Dash") "-")
    ;; third condition (default condition - always true)
    ;; first character of input string
    (t (str:s-first s))))

(defun solve ()
  ;; first, split inputstr with " " and store result in
  ;; `splited` variable that limited to the `let` scope (local
  ;; variable inside `let` scope)
  (let ((splited (str:split " " inputstr)))
    ;; map `convertstr` function to each element in `splited` list
    ;; and assign new list to `completelist` local variable
    (let ((completelist (mapcar #'convertstr splited)))
      ;; join each element in `completelist` and write to stdout
      (format t "TFCCTF{~A}~%" (str:join "" completelist)))))
