"""Interface for C extended functions."""

from typing import List


def fputs(str: str, filename: str) -> None:
    """Wrapper for fputs C function."""
    ...


def process_file(filename: str) -> List[List[int]]:
    """Process a file and return a list of lists."""
    ...
