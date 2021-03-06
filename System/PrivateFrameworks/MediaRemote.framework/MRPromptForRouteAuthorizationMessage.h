/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) long long inputType; 
-(unsigned long long)type;
-(MRAVOutputDevice *)route;
-(long long)inputType;
-(id)initWithRoute:(id)arg1 inputType:(long long)arg2 ;
@end

