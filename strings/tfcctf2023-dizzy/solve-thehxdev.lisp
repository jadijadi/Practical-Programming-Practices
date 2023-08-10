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
;; sbcl --noinform --load dizzy-thehxdev.lisp --eval '(dizzy:solve)' --quit
;; ===================================================


;; define package dizzy
(defpackage :dizzy
  (:use :cl)
  ;; export `solve` function so it's not
  ;; private and can be used with `dizzy:solve`
  (:export
   #:solve))
(in-package :dizzy)

;; import `str` package for easy
;; string manipulatoin
(ql:quickload "str")

;; define inputstr variable
(defvar inputstr
  "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24")

;; split `inputstr` with " " delimiter
;; and assign new list to `splited` variable
(defvar splited
  (str:split " " inputstr))

;; define `seperate-str` function to
;; seperate first character with it's number
(defun seperate-str (s)
  ;; make a list of results
  (list
   ;; extract first character
   (str:s-first s)
   ;; convert rest of the word to integer as index
   (parse-integer (str:substring 1 t s))))

;; compare second element of a list to another list
;; (for sorting the `seperated` list with each character's index)
(defun compare-second (a b)
  (< (second a) (second b)))

(defun solve ()
  ;; define a local variable `seperated` contains result of
  ;; mapping `seperate-str` to `splited` list
  ;; (Varibales defined with `let` are only
  ;; accessible in `let` scope)
  (let ((seperated (mapcar #'seperate-str splited)))
    ;; sort the `seperated` list based on their second element (index)
    (let ((sorted (sort seperated #'(lambda (a b) (compare-second a b)))))
      ;; make list of first elements (because each character is
      ;; grouped with it's index. so our sorted list contains
      ;; nested lists)
      ;; then join all sorted characters and print to stdout
      (format t "~A~%" (str:join "" (mapcar #'car sorted))))))
