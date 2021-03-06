/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPReceiverETAControllerDelegate <NSObject>
@required
-(void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2;
-(void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 sharedTripDidClose:(id)arg2;
-(void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2;

@end

