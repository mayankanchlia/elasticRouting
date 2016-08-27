/*******************************************************************************
 *  Copyright: National ICT Australia,  2007 - 2011                            *
 *  Developed at the ATP lab, Networked Systems research theme                 *
 *  Author(s): Athanassios Boulis, Yuriy Tselishchev                           *
 *  This file is distributed under the terms in the attached LICENSE file.     *
 *  If you do not find this file, copies can be found by writing to:           *
 *                                                                             *
 *      NICTA, Locked Bag 9013, Alexandria, NSW 1435, Australia                *
 *      Attention:  License Inquiry.                                           *
 *                                                                             *
 *******************************************************************************/

#include "EllasticRouting.h"

Define_Module(EllasticRouting)
void EllasticRouting::startup() { 
	
trace() << "i'm in startup";
     // self = getParentModule()->getIndex();
	// trace() << self ;
	sendHelloMsg();



}
void EllasticRouting::sendHelloMsg (){
EllasticRoutingPacket *helloMsg = new EllasticRoutingPacket("EllasticRouting Hello Packet",NETWORK_LAYER_PACKET);
	helloMsg->setType(1);
	//trace() << helloMsg->getType(); 
	helloMsg->setSource(SELF_NETWORK_ADDRESS);
	helloMsg->setDestination(BROADCAST_NETWORK_ADDRESS);
	trace()<<"hello";
	toMacLayer(helloMsg,-1);


}

void EllasticRouting::fromApplicationLayer(cPacket * pkt, const char *destination)
{
	// EllasticRoutingPacket *netPacket = new EllasticRoutingPacket("EllasticRouting packet", NETWORK_LAYER_PACKET);
	// netPacket->setSource(SELF_NETWORK_ADDRESS);
	// netPacket->setDestination(destination);
	// encapsulatePacket(netPacket, pkt);
	// trace() <<"mayank";
	// toMacLayer(netPacket, resolveNetworkAddress(destination));
}


void EllasticRouting::fromMacLayer(cPacket * pkt, int srcMacAddress, double rssi, double lqi)
{
	 EllasticRoutingPacket *netPacket = dynamic_cast <EllasticRoutingPacket*>(pkt);
	 if(netPacket-> getType()==1){
	 	trace()<<"hellllo grom mac" << netPacket->getSource();
		 
	// if (netPacket) {
	// 	string destination(netPacket->getDestination());
	// 	if (destination.compare(SELF_NETWORK_ADDRESS) == 0 ||
	// 	    destination.compare(BROADCAST_NETWORK_ADDRESS) == 0)
	// 		toApplicationLayer(pkt);
	 }
	// }
}

