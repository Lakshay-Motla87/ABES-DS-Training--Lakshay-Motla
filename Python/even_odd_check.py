# even_odd_checker.py

def main():
    print("Welcome to the Even or Odd Checker!")

    # Get a list of numbers from the user
    numbers = input("Enter numbers separated by spaces: ")

    # Split the input string into a list of strings, then convert to integers
    number_list = [int(num) for num in numbers.split()]

    print("\nResults:")
    for num in number_list:
        if num % 2 == 0:
            print(f"{num} is Even")
        else:
            print(f"{num} is Odd")

if __name__ == "__main__":
    main()
