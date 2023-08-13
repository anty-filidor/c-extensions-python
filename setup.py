from distutils.core import setup, Extension

def main():
    setup(name="my_library",
            version="1.0.0",
            description="Python interface for the C library function",
            author="<your name>",
            author_email="your_email@gmail.com",
            ext_modules=[
                Extension(
                    "my_library.my_lib",
                    include_dirs=["src"],
                    sources=["src/myLib.c"],
                )
            ],
            packages=["my_library"],
    )

if __name__ == "__main__":
    main()
