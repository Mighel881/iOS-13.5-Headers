/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection {

	BOOL _previouslyInitialized;

}

@property (nonatomic,readonly) BOOL previouslyInitialized;              //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedConnection;
-(void)handleError:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)previouslyInitialized;
@end
