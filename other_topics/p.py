import time

def my_function():
   x=0
   while(x<1000000000):
    x+=1
   
   

# 1. Record the start time
start_time = time.perf_counter()

# 2. Call your function
my_function()

# 3. Record the end time
end_time = time.perf_counter()

# 4. Calculate the difference
execution_time = end_time - start_time
print(f"Function took {execution_time:.6f} seconds to complete.")
