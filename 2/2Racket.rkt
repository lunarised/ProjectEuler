#lang racket
(define (fibonacciGen a b l m)
	(if (< a m)
	  (fibonacciGen (+ b a) a (cons a l) m)
	  l
	)

)

(define (sumEvenFib m) 
  	(foldl + 
	       0 
	       (filter 
		   (lambda (x) (= (modulo x 2) 0)) 
		   (fibonacciGen 1 1 ( list 1 ) m))))

(sumEvenFib 4000000)
