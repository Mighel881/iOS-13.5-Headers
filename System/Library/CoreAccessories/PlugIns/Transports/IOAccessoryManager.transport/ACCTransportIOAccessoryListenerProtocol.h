/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCTransportIOAccessoryListenerProtocol <NSObject>
@required
-(void)IOAccessoryManagerServiceInfoSet:(unsigned)arg1;
-(void)IOAccessoryManagerServiceDetached:(unsigned)arg1;
-(void)IOAccessoryManagerServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryEAServiceArrived:(unsigned)arg1;
-(void)IOAccessoryEAServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceArrived:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceTerminated:(unsigned)arg1;

@end
