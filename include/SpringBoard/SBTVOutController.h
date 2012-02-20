/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBTVOutController : SBUnknownSuperclass {
	int _tvOutMode;	// 4 = 0x4
}
@property(assign, nonatomic) int tvOutMode;	// G=0xbe065; S=0xbe075; @synthesize=_tvOutMode
@property(readonly, assign, nonatomic) BOOL isTVSignalTypeDigital;	// G=0xbe5d9; 
+ (id)sharedInstance;	// 0xbe151
- (id)init;	// 0xbe085
- (void)dealloc;	// 0xbf1bd
- (void)addClone:(id)clone stevenoteAllowed:(BOOL)allowed;	// 0xbefe5
- (void)setIntialTVModeIfNeeded;	// 0xbedf1
- (void)updateLayerKitSettings;	// 0xbe969
- (void)updateSettings;	// 0xbe645
// declared property getter: - (BOOL)isTVSignalTypeDigital;	// 0xbe5d9
- (void)_handleIapServerConnectionDied;	// 0xbe589
- (void)_tetherSettingChanged:(id)changed;	// 0xbe579
- (void)_updateAVRoutes;	// 0xbe465
- (void)_pickableRoutesChanged:(id)changed;	// 0xbe455
- (void)_mediaServerConnectionDied:(id)died;	// 0xbe415
- (void)startListeningForSettingsChanges;	// 0xbe33d
- (void)startListeningForAVSystemControllerNotifications;	// 0xbe28d
- (void)stopListeningForAVSystemControllerNotifications;	// 0xbe215
- (void)stopListeningForSettingsChanges;	// 0xbe199
// declared property getter: - (int)tvOutMode;	// 0xbe065
// declared property setter: - (void)setTvOutMode:(int)mode;	// 0xbe075
@end