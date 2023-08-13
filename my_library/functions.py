"""Functions in the library."""

from typing import Any, List


def foo(*args: Any, **kwargs: Any) -> int:
    return 42


def bar(arg_1: int, arg_2: str) -> List[str]:
    return [arg_2] * arg_1
