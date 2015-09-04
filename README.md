# benchmarks
Benchmarks for Iodine

## Current Results

| Test                    | C time | Python time | **Iodine time** | Ruby time |
| ----------------------- | ------ | ----------- | ----------- | --------- |
| Prime Sieve (1,000,000) | 0.044s | 1.023s      | **12.493s**   |  N/A      |
| Prime (relative to C)   | 100%   | 2320% | **28393%**  | N/A       |
| Fibonacci (32)          | 0.009s | 0.742s      | **13.0s**   | 1.19s     |
| Fibs (relative to C)    | 100%   | 8240%       | **144000%** | 13200%    |

All results are rounded to 3 significant figures where appropriate. Test results may vary depending on machine and settings.
