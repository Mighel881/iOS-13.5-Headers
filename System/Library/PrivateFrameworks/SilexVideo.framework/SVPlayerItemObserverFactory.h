/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemObserverFactory.h>

@protocol SVPlayerItemObserverFactory <NSObject>
@required
-(id)createPlayerItemObserverForVideo:(id)arg1;

@end


@protocol SVPlayerProviding;
@class NSString;

@interface SVPlayerItemObserverFactory : NSObject <SVPlayerItemObserverFactory> {

	id<SVPlayerProviding> _playerProvider;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPlayerItemObserverForVideo:(id)arg1 ;
-(id<SVPlayerProviding>)playerProvider;
-(id)initWithPlayerProvider:(id)arg1 ;
@end
