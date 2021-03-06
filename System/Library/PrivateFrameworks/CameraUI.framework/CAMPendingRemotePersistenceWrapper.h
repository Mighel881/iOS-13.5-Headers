/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureRequest, NSDate, NSMutableDictionary;

@interface CAMPendingRemotePersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	NSDate* _creationDate;
	NSMutableDictionary* _job;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * job;                //@synthesize job=_job - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSDate *)creationDate;
-(CAMCaptureRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMutableDictionary *)job;
-(id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

