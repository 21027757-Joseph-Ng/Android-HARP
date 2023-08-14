package com.unity3d.player; // Replace with your actual package name
import android.net.Uri;
import android.content.ComponentName;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.util.Base64;
import java.io.ByteArrayOutputStream;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

public class UnityPlayerActivityProxy extends com.rokid.uxrplugin.activity.UXRUnityActivity {

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
	if (requestCode == 1 && data != null){//qr scanner
            super.onActivityResult(requestCode, resultCode, data);   
	    String result = data.getStringExtra("com.blikoon.qrcodescanner.got_qr_scan_relult");
            UnityPlayer.UnitySendMessage("QR Scanner", "OnActivityResult", result);

	    Uri webpage = Uri.parse(result);
	    Intent webIntent = new Intent(Intent.ACTION_VIEW, webpage);
	    webIntent.setPackage("com.android.chrome");
	    startActivity(webIntent);
	}

	else if (requestCode == 2 && data != null){//object detector
	    Bundle extras = data.getExtras();
            Bitmap photo = (Bitmap) extras.get("data");

            // Convert the Bitmap to a byte array
            ByteArrayOutputStream stream = new ByteArrayOutputStream();
            photo.compress(Bitmap.CompressFormat.PNG, 100, stream);
            byte[] photoBytes = stream.toByteArray();

            // Send the photoBytes back to Unity
            UnityPlayer.UnitySendMessage("DetectButton", "DetectObjects", Base64.encodeToString(photoBytes, Base64.DEFAULT));
	}

	else if (requestCode == 3 && data != null){//face detector
	    Bundle extras = data.getExtras();
            Bitmap photo = (Bitmap) extras.get("data");

            // Convert the Bitmap to a byte array
            ByteArrayOutputStream stream = new ByteArrayOutputStream();
            photo.compress(Bitmap.CompressFormat.PNG, 100, stream);
            byte[] photoBytes = stream.toByteArray();

            // Send the photoBytes back to Unity
            UnityPlayer.UnitySendMessage("DetectButton", "DetectFace", Base64.encodeToString(photoBytes, Base64.DEFAULT));
    
	}

	else if (requestCode == 4){//document viewer
	    Uri webpage = Uri.parse("https://onedrive.live.com/");
	    Intent webIntent = new Intent(Intent.ACTION_VIEW, webpage);
	    webIntent.setPackage("com.android.chrome");
	    startActivity(webIntent);
	}
	
	else if (requestCode == 5){//document viewer
	    Uri webpage = Uri.parse("https://drive.google.com/");
	    Intent webIntent = new Intent(Intent.ACTION_VIEW, webpage);
	    webIntent.setPackage("com.android.chrome");
	    startActivity(webIntent);
	}
    }
}
