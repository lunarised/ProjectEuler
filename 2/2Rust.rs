fn main(){
    let max = 1000;
    let sum = fibGen(1, 1, 4000000, 0);
    println!("{}", sum);
}


fn fibGen(a:usize, b:usize, max:usize, sum:usize)-> usize{
    let mut newSum = sum;
    let c = a + b;
    if a % 2 == 0{
        newSum += a;
    }
    if a < max{
        return fibGen(c, a, max, newSum);
    }
    else{
        return sum;   
    }
}