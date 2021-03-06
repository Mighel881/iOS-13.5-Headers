/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {

	int _overwrite;
	NSURL* _destinationURL;
	NSURL* _priorOrderedURL;
	BOOL _shouldSendOrder;

}

@property (assign,nonatomic) int overwrite;                        //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;               //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;              //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
+(id)stringFromOverwriteValue:(int)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(int)overwrite;
-(void)setOverwrite:(int)arg1 ;
-(id)requestBody;
-(id)additionalHeaderValues;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

