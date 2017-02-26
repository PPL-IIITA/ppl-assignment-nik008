class essential_gift{
private:
    int value;
    float price;

    essential_gift(int value,float price)
    {
    this->value = value;
    this->price = price;
    }

    int getvalue(void)
    {
        return value;
    }
    float getprice(void)
    {
        return price;
    }
};
