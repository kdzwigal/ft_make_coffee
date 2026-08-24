# ☕ ft_make_coffee

Welcome to **ft_make_coffee**, the most heavily optimized, strictly structured C library for brewing your daily dose of caffeine. 

## 📜 Description
Why make coffee manually when you can compile your morning routine? This project provides a humorous set of pseudo-C functions to manage your coffee machine's state, gracefully handling resources like water, beans, and paper filters without leaking (water) memory. It guarantees a smooth execution flow to get your system booted up for the day.

## 🗂️ Files Overview

*   **`ft_make_coffee.c`**: The main orchestration routine. It initializes the variables (like setting water to `INT_MAX`), gathers your effort and time, and sequentially calls the utilities to execute the brew.
*   **`ft_coffee_utils.c`**: The core utility functions acting as the hardware abstraction layer for your coffee maker:
    *   `ft_check_filter()`: Safely frees the `old_filter_with_grounds` to the `bio_bin` to prevent resource leaks, then allocates a new filter.
    *   `ft_check_beans()`: Checks for a null state in your bean hopper and replenishes the supply if necessary.
    *   `ft_fill_the_water()`: Fills the water tank (be careful not to buffer overflow!).
    *   `ft_set_cups()`: Interacts with the machine's display interface to set the desired volume.
    *   `ft_push_start()`: The final system call to physically push the start button.

## 🚀 Usage

To brew a cup, simply ensure you have the required headers and call the main function with your current hardware parameters:

```c
#include "coffee_utils.h"
#include "your_preferences.h"

int main(void)
{
    coffee beans = ARABICA_DARK_ROAST;
    your effort = MINIMAL_EFFORT;
    new filter = PAPER_FILTER;

    // Initiate the brewing sequence
    ft_make_coffee(beans, effort, filter);
    
    return (0); // Returns 0 on successful brew. Segfaults if beans are missing.
}
```

## ⚠️ Important Warnings & Norms
* Always verify that `coffee beans` is not a `NULL` pointer before execution. 
* Do not pipe the hot output to `/dev/null`. It is strictly meant for standard input (your mug).
* Failure to comply with the strict Norms of `ft_check_filter` may result in a bitter compilation error.
