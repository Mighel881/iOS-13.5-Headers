/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFImage.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface MKSearchFoundationImage : SFImage {

	NSObject*<OS_dispatch_group> _group;

}
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end
