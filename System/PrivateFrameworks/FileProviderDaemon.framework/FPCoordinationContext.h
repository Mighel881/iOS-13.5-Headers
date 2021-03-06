/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface FPCoordinationContext : NSObject {

	NSProgress* _progress;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSProgress *)progress;
-(id)completionHandler;
-(id)initWithProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

