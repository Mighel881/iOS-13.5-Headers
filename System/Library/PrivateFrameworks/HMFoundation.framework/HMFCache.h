/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject {

	BOOL _exists;
	NSURL* _URL;

}

@property (copy,readonly) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
@property (getter=isExists,readonly) BOOL exists;              //@synthesize exists=_exists - In the implementation block
+(id)defaultCache;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)isExists;
@end

