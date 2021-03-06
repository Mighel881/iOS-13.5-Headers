/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject {

	HKAuthorizationRequestRecord* _record;
	/*^block*/id _requestSentHandler;
	/*^block*/id _requestFinishedHandler;

}

@property (nonatomic,readonly) HKAuthorizationRequestRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy,readonly) id requestSentHandler;                         //@synthesize requestSentHandler=_requestSentHandler - In the implementation block
@property (nonatomic,copy,readonly) id requestFinishedHandler;                     //@synthesize requestFinishedHandler=_requestFinishedHandler - In the implementation block
-(HKAuthorizationRequestRecord *)record;
-(id)requestSentHandler;
-(id)initWithRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 requestFinishedHandler:(/*^block*/id)arg3 ;
-(id)requestFinishedHandler;
@end

