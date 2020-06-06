/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUOnce : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _didPerformOnce;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performBlockOnce:(/*^block*/id)arg1 ;
@end
