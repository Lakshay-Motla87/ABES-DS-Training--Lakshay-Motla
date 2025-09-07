# Multiplication Table Program

def main():
    try:
        number = int(input("Enter a number to print its multiplication table: "))
        print(f"\nMultiplication Table for {number}:\n")
        for i in range(1, 11):
            print(f"{number} x {i} = {number * i}")
    except ValueError:
        print("Please enter a valid integer.")

if __name__ == "__main__":
    main()
