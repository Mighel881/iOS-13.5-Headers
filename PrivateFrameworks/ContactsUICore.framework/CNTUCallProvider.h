/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTUCallProvider.h>
@class NSString, NSSet;


@protocol CNTUCallProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@required
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(BOOL)supportsAudio;
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsVideo;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;

@end


@class NSString, NSSet, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {

	TUCallProvider* _callProvider;

}

@property (nonatomic,copy) TUCallProvider * callProvider;                      //@synthesize callProvider=_callProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(BOOL)supportsAudio;
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsVideo;
-(TUCallProvider *)callProvider;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3 ;
-(id)initWithCallProvider:(id)arg1 ;
@end
