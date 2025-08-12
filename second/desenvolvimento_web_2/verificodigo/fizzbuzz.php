<?php
function fizzbuzz($n)
{
  for ($i = 1; $i <= $n; $i++) {
    if ($i % 3 == 0 and $i % 5 == 0) {
      echo "FizzBuzz ";
    } else if ($i % 3 == 0) {
      echo "Fizz ";
    } elseif ($i % 5 == 0) {
      echo "Buzz ";
    } else {
      echo "$i ";
    }
  }
}

fizzbuzz(25);
echo "\n";
