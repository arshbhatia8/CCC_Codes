def last_letters(word):
    last_two_letters = word[-2:][::-1]
    return " ".join(last_two_letters)
