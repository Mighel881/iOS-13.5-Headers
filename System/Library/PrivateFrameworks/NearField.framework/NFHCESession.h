/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFHostEmulationSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {

	NFWeakReference* _delegate;

}

@property (assign) id<NFHCESessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NFHCESessionDelegate>)delegate;
-(void)setDelegate:(id<NFHCESessionDelegate>)arg1 ;
-(void)endSession;
-(void)didEndUnexpectedly;
-(id)readAPDU:(id*)arg1 ;
-(void)didReceiveAPDU:(id)arg1 ;
-(void)didConnectToReader;
-(void)didDisconnectFromReader;
-(id)startEmulation;
-(id)stopEmulation;
-(id)sendAPDU:(id)arg1 ;
@end

