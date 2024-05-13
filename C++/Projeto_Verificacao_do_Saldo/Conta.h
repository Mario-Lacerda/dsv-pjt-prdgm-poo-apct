// Conta.h
class Conta {
public:
    virtual float getSaldo() const = 0;
};

class ContaPoupanca : public Conta {
public:
    float getSaldo() const override;
};

class ContaCorrente : public Conta {
public:
    float getSaldo() const override;
};

class ContaInvestimento : public Conta {
public:
    float getSaldo() const override;
};
