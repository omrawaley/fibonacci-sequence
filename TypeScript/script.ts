function gen_fib(n: number): number[] {
  let fib: number[] = [];

  fib.push(1);
  fib.push(1);

  for (let i: number = 2; i < n; ++i) {
    fib.push(fib[i - 2] + fib[i - 1]);
  }

  return fib;
}

let fib: number[] = gen_fib(10);

let output: string = "";

for (let number of fib) {
  output = output + number + " ";
}

console.log(output);
