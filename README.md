# HPC. Cache Locality. Matrix Access

Compared row-wise and column-wise access to a 4000×4000 matrix in C++ to explore how memory access patterns affect performance.

## What I did
- Measured execution time for both access patterns using std::chrono
- Analyzed cache hit/miss behavior (spatial locality)
- Applied PCAM parallel design: partitioning, communication, agglomeration, mapping

## Result
Row-wise was consistently faster due to better spatial locality and fewer cache misses.

## Files
- `BDA2406_task2_code_Abdanur_Ayazbek.cpp` — C++ source code
- `BDA2406_task2_answers_Abdanur_Ayazbek.docx` — answers and analysis
