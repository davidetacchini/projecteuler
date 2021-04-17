bool is_prime(int number) {
    if (number <= 1) {
        return false;
    } else if (number == 2) {
        return true;
    }

    int i = 3;
    while ((i * i) <= number) { 
        if(number % i == 0) {
            return false;
        } else {
            i += 2;
        }
    }
    return true;
}
