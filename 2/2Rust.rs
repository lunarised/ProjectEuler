fn main(){
    let sum = fib_gen(1, 1, 4000000, 0);
    println!("{}", sum);
}


fn fib_gen(a:usize, b:usize, max:usize, sum:usize)-> usize{
    let mut new_sum = sum;
    let c = a + b;
    if a % 2 == 0{
        new_sum += a;
    }
    if a < max{
        return fib_gen(c, a, max, new_sum);
    }
    else{
        return sum;   
    }
}