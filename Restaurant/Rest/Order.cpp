#include "Order.h"

Order::Order(int id, ORD_TYPE r_Type, int AT, double cost, int sizeoforder)
{
	ID = (id>0&&id<1000)?id:0;	//1<ID<999
	type = r_Type;
	status = WAIT;
	ArrTime = AT;
	totalMoney = cost;
	size = sizeoforder;
}

Order::~Order()
{
}

int Order::GetID()
{
	return ID;
}

int Order::GetArrTime()
{
	return ArrTime;
}

int Order::GetSize()
{
	return size;
}


void Order::SetType(ORD_TYPE newtype)
{
	type = newtype;
}

ORD_TYPE Order::GetType() const
{
	return type;
}


void Order::SetDistance(int d)
{
	Distance = d>0?d:0;
}

int Order::GetDistance() const
{
	return Distance;
}

void Order::SettotalMoney(double mon)
{
	totalMoney = mon;
}

double Order::GettotalMoney() const
{
	return totalMoney;
}

void Order::AddExtraMoney(double mon)
{
	totalMoney += mon;
}

void Order::setStatus(ORD_STATUS s)
{
	status = s;
}

ORD_STATUS Order::getStatus() const
{
	return status;
}

bool Order::operator==(int Value)
{
	return (this->ID==Value)?true:false;
}

