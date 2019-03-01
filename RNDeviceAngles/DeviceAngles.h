//
//  DeviceAngles.h
//  DeviceAngles
//
//  Created by Cristian Szwarc on 20/08/16.

#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import <CoreMotion/CoreMotion.h>

@interface DeviceAngles : NSObject <RCTBridgeModule> {
    CMMotionManager *_motionManager;
}
- (void) setDeviceMotionUpdateInterval:(double) interval;
- (void) getDeviceMotionUpdateInterval:(RCTResponseSenderBlock) cb;
- (void) startMotionUpdates;
- (void) stopMotionUpdates;

@end
