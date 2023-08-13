from distutils.core import setup, Extension

def main():
    setup(name="my_library",
            version="1.0.0",
            description="Python interface for the C library function",
            author="some author",
            author_email="some.email@domain.com",
            ext_modules=[
                Extension(
                    "my_library.my_lib",
                    include_dirs=["c_modules"],
                    sources=["c_modules/myLib.c"],
                )
            ],
            packages=["my_library"],
    )

if __name__ == "__main__":
    main()
