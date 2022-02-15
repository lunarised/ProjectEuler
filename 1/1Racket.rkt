#lang racket
(define (getValue a) 
	(if 
		(or 
		    ( =  (modulo a 3) 0 ) 
		    ( = (modulo a 5) 0 )
		    )		  
		  a
		  0
	)
)


(define (Euler1 MAX)
  (foldl 
    + 
    0 
    (map 
      	getValue 
	(range MAX)
    )
  )
)  

(Euler1 1000)


