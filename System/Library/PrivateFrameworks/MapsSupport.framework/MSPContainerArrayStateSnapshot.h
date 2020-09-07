/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>

@class NSArray, NSUUID, NSString;

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {

	NSArray* _contents;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
-(id)init;
-(NSString *)description;
-(NSArray *)contents;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)initWithContents:(id)arg1 ;
-(id)initWithContents:(id)arg1 clientIdentifier:(id)arg2 ;
@end
