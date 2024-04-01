fn gen_fib(n: usize) -> Vec<usize> {
    let mut fib: Vec<usize> = Vec::new();

    for _ in 0..2 {
        fib.push(1);
    }

    for i in 2..n {
        fib.push(fib[i - 2] + fib[i - 1]);
    }

    fib
}

fn main() {
    let fib: Vec<usize> = gen_fib(10);

    for num in fib.iter() {
        print!("{} ", num);
    }
}
