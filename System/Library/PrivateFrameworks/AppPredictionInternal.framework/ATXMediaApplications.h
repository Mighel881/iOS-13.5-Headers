/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface ATXMediaApplications : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _mediaApps;

}
-(id)init;
-(void)_updateMediaApps;
-(BOOL)appSupportsMedia:(id)arg1 ;
@end

