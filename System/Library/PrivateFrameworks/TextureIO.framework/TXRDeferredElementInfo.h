/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface TXRDeferredElementInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	NSMutableArray* _faces;

}

@property (nonatomic,readonly) NSMutableArray * faces;              //@synthesize faces=_faces - In the implementation block
-(NSMutableArray *)faces;
-(id)initAsCubemap:(BOOL)arg1 ;
@end

