def main():
    time=input("What time is it? ")
    new=convert(time)
    if 7.0<=new<=8.0:
        print("breakfast time")
    elif 12.0<=new<=13.0:
        print("lunch time")
    elif 18.0<=new<=19.0:
        print("dinner time")


def convert(time):
    hour,min=time.split(":")
    h=float(hour)
    m=float(min)/60
    return h+m


if __name__ == "__main__":
    main()

