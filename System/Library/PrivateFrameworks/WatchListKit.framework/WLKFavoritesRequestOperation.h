/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _favorites;

}

@property (nonatomic,readonly) NSArray * favorites;              //@synthesize favorites=_favorites - In the implementation block
-(NSArray *)favorites;
-(id)initWithCaller:(id)arg1 ;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
@end

