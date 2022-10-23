(defvar x 100)

(defmethod fun1 (x)
  (print x)
  (fun2))

(defmethod fun2 ()
  (print x)
  (setf x 20)
  (print x))

(fun1 5)
(print x)