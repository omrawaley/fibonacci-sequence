local function gen_fib (n)
  local fib = {n=n}

  fib[1] = 1;
  fib[2] = 1;

  for i = 3, n, 1 do
    fib[i] = fib[i - 2] + fib[i - 1]
  end

  return fib
end

local fib = gen_fib(10)

for _, n in ipairs(fib) do
  io.write(n)
  io.write(" ")
end
