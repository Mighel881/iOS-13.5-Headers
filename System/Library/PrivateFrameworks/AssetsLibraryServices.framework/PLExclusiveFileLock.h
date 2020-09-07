/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLUnlocker.h>

@class NSURL, NSString;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {

	NSURL* _url;
	int _fd;

}

@property (nonatomic,readonly) BOOL isLocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)unlock;
-(BOOL)isLocked;
-(BOOL)lockWithError:(id*)arg1 ;
-(id)lockData;
-(id)lockFailure;
@end
