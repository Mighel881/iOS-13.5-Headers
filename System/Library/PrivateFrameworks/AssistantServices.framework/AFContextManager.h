/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(id)init;
-(void)dealloc;
-(void)_startListening;
-(void)_stopListening;
-(void)removeContextProvider:(id)arg1 ;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_serverName;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
@end
