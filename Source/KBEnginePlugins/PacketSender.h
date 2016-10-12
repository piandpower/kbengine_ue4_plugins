// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KBECommon.h"

class NetworkInterface;

/*
	包发送模块(与服务端网络部分的名称对应)
	处理网络数据的发送
*/
class KBENGINEPLUGINS_API PacketSender
{
public:
	PacketSender(NetworkInterface* pNetworkInterface);
	virtual ~PacketSender();

public:
	bool send(FString datas);

protected:
	NetworkInterface* pNetworkInterface_;
};