package com.unity3d.player; // Replace with your actual package name
import android.net.Uri;
import android.content.Intent;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

public class UnityPlayerActivityProxy extends com.rokid.uxrplugin.activity.UXRUnityActivity {

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
	if (requestCode == 1){
            super.onActivityResult(requestCode, resultCode, data);
	    String result = data.getStringExtra("com.blikoon.qrcodescanner.got_qr_scan_relult");
            UnityPlayer.UnitySendMessage("QR Scanner", "OnActivityResult", result);

	    Uri webpage = Uri.parse(result);
	    Intent webIntent = new Intent(Intent.ACTION_VIEW, webpage);
	    webIntent.setPackage("com.android.chrome");
	    startActivity(webIntent);
	}
	else if (requestCode == 2){
	    Uri webpage = Uri.parse("ms-voip-video://");
	    Intent webIntent = new Intent(Intent.ACTION_VIEW, webpage);
	    webIntent.setPackage("com.android.chrome");
	    startActivity(webIntent);
	}
    }
}
